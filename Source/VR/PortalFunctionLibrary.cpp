// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"

void UPortalFunctionLibrary:: ResizeRenderTarget(UTextureRenderTarget2D* render_Target,float size_x,float size_y)
{
    if(render_Targt==nullptr)
        return;

    render_Target->ResizeTarget(size_x,size_y);
}
