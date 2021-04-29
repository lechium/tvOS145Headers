/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHAssetPropertySet.h>

@interface PHAssetPhotoIrisProperties : PHAssetPropertySet {

	unsigned short _photoIrisVisibilityState;
	SCD_Struct_PH9 _photoIrisStillDisplayTime;
	SCD_Struct_PH9 _photoIrisVideoDuration;

}

@property (nonatomic,readonly) SCD_Struct_PH9 photoIrisStillDisplayTime;              //@synthesize photoIrisStillDisplayTime=_photoIrisStillDisplayTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH9 photoIrisVideoDuration;                 //@synthesize photoIrisVideoDuration=_photoIrisVideoDuration - In the implementation block
@property (nonatomic,readonly) unsigned short photoIrisVisibilityState;               //@synthesize photoIrisVisibilityState=_photoIrisVisibilityState - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(SCD_Struct_PH9)photoIrisStillDisplayTime;
-(SCD_Struct_PH9)photoIrisVideoDuration;
-(unsigned short)photoIrisVisibilityState;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end
