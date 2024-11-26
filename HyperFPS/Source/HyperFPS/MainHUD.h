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
    // �⺻������ DrawHUD()�� �������̵��Ͽ� HUD �׸���
    virtual void DrawHUD() override;

private:
    // ����: �ؽ�Ʈ�� ȭ�鿡 ǥ���ϱ� ���� ����
    UPROPERTY(EditAnywhere, Category = "HUD")
    UFont* Font;
	
};
