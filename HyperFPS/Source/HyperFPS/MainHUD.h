// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainHUD.generated.h"

/**
 * 
 */
UCLASS()
class HYPERFPS_API AMainHUD : public AHUD
{
	GENERATED_BODY()

public:
    AMainHUD();
    // 기본적으로 DrawHUD()를 오버라이드하여 HUD 그리기
    virtual void DrawHUD() override;

private:
    // 예시: 텍스트를 화면에 표시하기 위한 변수
    UPROPERTY(EditAnywhere, Category = "HUD")
    UFont* Font;
	
};
