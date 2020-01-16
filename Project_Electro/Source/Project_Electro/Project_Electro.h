// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Project_Electro.generated.h"

UENUM(BlueprintType)
enum class EPowerType : uint8 {
	Red = 0,
	Blue,
	Green,
	Grey
};

USTRUCT(BlueprintType)
struct FPowerTypeValue {
	GENERATED_USTRUCT_BODY();

	// properties
	UPROPERTY(BlueprintReadWrite)
		EPowerType type;
	UPROPERTY(BlueprintReadWrite)
		float value;

};
