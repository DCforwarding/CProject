// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "FPSCharacter.generated.h"

UCLASS()
class CPROJECT5_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//��������ǰ���ƶ�������
	UFUNCTION()
		void MoveForward(float Value);

	//���ڴ��������ƶ�������
	UFUNCTION()
	void MoveRight(float Value);

	//���¼�ʱ��������Ծ���
	UFUNCTION()
	void StartJump();

	//�ͷż�ʱ�������Ծ���
	UFUNCTION()
	void StopJump();

	//��һ�˳������壨�ֱۣ�������������ҿɼ�
	UPROPERTY(VisibleDefaultsOnly,Category=Mesh)
	USkeletalMeshComponent* FPSMesh;
	
	//FPS�����
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* FPSCameraComponent;
};