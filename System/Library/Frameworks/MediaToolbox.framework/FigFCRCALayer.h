/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigFCRCALayer : FigBaseCALayer {

	OpaqueFigCaptionRendererCALayerInternal* layerInternal;

}
-(id)init;
-(void)dealloc;
-(void)layoutSublayers;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setVideoBounds:(CGRect)arg1 ;
-(void)clear:(CGRect)arg1 ;
-(void)setCallbacks:(id)arg1 userEvent:(/*function pointer*/void*)arg2 viewportChanged:(/*function pointer*/void*)arg3 drawInContext:(/*function pointer*/void*)arg4 ;
-(void)compose;
@end

