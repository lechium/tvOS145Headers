/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/_MTLParallelRenderCommandEncoder.h>

@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder
-(void)setLabel:(id)arg1 ;
-(unsigned long long)getType;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)endEncoding;
-(id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2 ;
-(BOOL)isMemorylessRender;
@end

