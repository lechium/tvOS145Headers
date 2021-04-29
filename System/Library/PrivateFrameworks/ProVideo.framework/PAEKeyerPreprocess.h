/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@class PAEKeyer;

@interface PAEKeyerPreprocess : NSObject {

	PAEKeyer* _keyer;
	id _apiManager;

}
-(void)dealloc;
-(BOOL)addAdvancedParametersWithParamAPI:(id)arg1 paramFlags:(unsigned)arg2 ;
-(BOOL)findGrainRegionWithInfo:(SCD_Struct_PA83*)arg1 coordX:(int*)arg2 coordY:(int*)arg3 width:(int)arg4 height:(int)arg5 minGreenHueAngle:(float)arg6 maxGreenHueAngle:(float)arg7 greenChroma:(float)arg8 minBlueHueAngle:(float)arg9 maxBlueHueAngle:(float)arg10 blueChroma:(float)arg11 ;
-(BOOL)doDegrainWithDegrainAmount:(double)arg1 degrainIntensity:(double)arg2 withInfo:(SCD_Struct_PA83*)arg3 outputNode:(HGRef<HGNode>*)arg4 pcaMatrix:(id)arg5 width:(int)arg6 height:(int)arg7 ;
-(BOOL)doPreprocessKeyerFootageWithParamAPI:(id)arg1 withInfo:(SCD_Struct_PA83*)arg2 linearInput:(BOOL)arg3 scaleX:(float)arg4 scaleY:(float)arg5 width:(float)arg6 height:(float)arg7 fixDVResult:(HGRef<HGNode>*)arg8 degrainResult:(HGRef<HGNode>*)arg9 outputNode:(HGRef<HGNode>*)arg10 ;
-(void)setKeyer:(id)arg1 ;
@end

