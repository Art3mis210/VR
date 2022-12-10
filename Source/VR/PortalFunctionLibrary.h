// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PortalFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class VR_API UPortalFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	public:
		UFUNCTION(BlueprintCallable, Category= "BlueprintFunctionLibrary")
		static void ResizeRenderTarget(UTextureRenderTarget2D* render_Target,float size_x,float size_y);
	
};
