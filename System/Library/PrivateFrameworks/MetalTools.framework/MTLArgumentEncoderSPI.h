/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class _MTLIndirectArgumentBufferLayout;


@protocol MTLArgumentEncoderSPI <MTLArgumentEncoder>
@property (nonatomic,readonly) _MTLIndirectArgumentBufferLayout * layout; 
@required
-(void)setFunctionPointer:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setFunctionPointers:(const id*)arg1 withRange:(NSRange)arg2;
-(_MTLIndirectArgumentBufferLayout *)layout;

@end
