// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUD.h"
#include "Engine/Canvas.h"
#include "UObject/ConstructorHelpers.h"

AMainHUD::AMainHUD()
{
    // 기본 폰트를 로드 (콘텐츠 경로 확인 필요)
    static ConstructorHelpers::FObjectFinder<UFont> FontObject(TEXT("/Engine/EngineFonts/Roboto"));
    if (FontObject.Succeeded())
    {
        Font = FontObject.Object;
    }
}

void AMainHUD::DrawHUD()
{
    Super::DrawHUD();

    if (Canvas && Font)
    {
        // HUD에 표시할 텍스트
        FString Text = TEXT("Hello, Unreal!");

        // 텍스트의 위치
        FVector2D ScreenPosition(50.0f, 50.0f);

        // 텍스트 색상
        FLinearColor TextColor = FLinearColor::Red;

        // 화면에 텍스트 그리기
        FCanvasTextItem TextItem(ScreenPosition, FText::FromString(Text), Font, TextColor);
        Canvas->DrawItem(TextItem);
    }
}
