// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUD.h"
#include "Engine/Canvas.h"
#include "UObject/ConstructorHelpers.h"

AMainHUD::AMainHUD()
{
    // �⺻ ��Ʈ�� �ε� (������ ��� Ȯ�� �ʿ�)
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
        // HUD�� ǥ���� �ؽ�Ʈ
        FString Text = TEXT("Hello, Unreal!");

        // �ؽ�Ʈ�� ��ġ
        FVector2D ScreenPosition(50.0f, 50.0f);

        // �ؽ�Ʈ ����
        FLinearColor TextColor = FLinearColor::Red;

        // ȭ�鿡 �ؽ�Ʈ �׸���
        FCanvasTextItem TextItem(ScreenPosition, FText::FromString(Text), Font, TextColor);
        Canvas->DrawItem(TextItem);
    }
}
