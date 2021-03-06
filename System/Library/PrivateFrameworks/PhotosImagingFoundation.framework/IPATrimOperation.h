/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPATrimOperation : IPAVideoOperation {

	SCD_Struct_IP1 _startTime;
	SCD_Struct_IP1 _endTime;

}

@property (nonatomic,readonly) SCD_Struct_IP1 startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IP1 endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IP2 trimRange; 
-(id)debugDescription;
-(id)identifier;
-(SCD_Struct_IP1)startTime;
-(SCD_Struct_IP1)endTime;
-(id)initWithStartTime:(SCD_Struct_IP1)arg1 endTime:(SCD_Struct_IP1)arg2 ;
-(id)settingsDictionary;
-(id)initWithOperation:(id)arg1 ;
-(SCD_Struct_IP2)trimRange;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(id)initWithTrimRange:(SCD_Struct_IP2)arg1 ;
-(id)trimRangeDictionary;
@end

