/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNCreateSmartCamprintRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _returnAllResults;

}

@property (assign,nonatomic) BOOL returnAllResults;              //@synthesize returnAllResults=_returnAllResults - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(BOOL)returnAllResults;
-(void)setReturnAllResults:(BOOL)arg1 ;
@end

