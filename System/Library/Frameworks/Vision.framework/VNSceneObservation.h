/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNFeaturePrintObservation.h>

@class NSArray, NSString;

@interface VNSceneObservation : VNFeaturePrintObservation {

	NSArray* _sceneprints;
	NSString* _sceneprintVersion;

}

@property (nonatomic,readonly) NSArray * sceneprints;                          //@synthesize sceneprints=_sceneprints - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneprintVersion;              //@synthesize sceneprintVersion=_sceneprintVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sceneprintCurrentVersion;
+(id)observationWithSceneprints:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)elementType;
-(unsigned long long)elementCount;
-(id)initWithRequestRevision:(unsigned long long)arg1 sceneprints:(id)arg2 ;
-(NSArray *)sceneprints;
-(NSString *)sceneprintVersion;
@end

