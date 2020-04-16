// Fill out your copyright notice in the Description page of Project Settings.

#include "Minecraft.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "RWTxtFile.h"

bool URWTxtFile::LoadTxt(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FileNameA));
}

bool URWTxtFile::SaveTxt(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FileNameB));
}
