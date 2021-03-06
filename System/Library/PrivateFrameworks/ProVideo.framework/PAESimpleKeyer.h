/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEKeyer.h>

@interface PAESimpleKeyer : PAEKeyer
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA83*)arg3 ;
-(BOOL)pullInitialKey:(id*)arg1 ;
-(BOOL)isSimpleKey;
-(HGRef<HGNode>*)getKeyerNode:(HGRef<HGNode>*)arg1 omKeyer:(PAEKeyerOMKeyer2D*)arg2 atTime:(/*function pointer*/void**)arg3 ;
-(BOOL)finishInitialSetup:(id*)arg1 ;
-(BOOL)oscIsPublishable;
-(void)createLutForNode:(HGNode*)arg1 input:(int)arg2 rect:(const HGRect*)arg3 omKeyer:(PAEKeyerOMKeyer2D*)arg4 ;
@end

