/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PCFxBlendOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PCFxLightWrapOptions : PCFxBlendOptions <NSCopying> {

	float _amount;
	float _intensity;
	float _lrOpacity;
	int _lrMode;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(void)setIntensity:(float)arg1 ;
-(void)setAmount:(float)arg1 ;
-(void)setLRBlendMode:(int)arg1 ;
-(float)getAmount;
-(float)getIntensity;
-(float)getOpacity;
-(int)getLRBlendMode;
-(id)initWithLRBlendOptions:(id)arg1 ;
@end

