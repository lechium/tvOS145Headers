/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/EAGLDrawable.h>

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable> {

	CAEAGLNativeWindow* _win;

}

@property (readonly) EAGLNativeWindowObject* nativeWindow; 
@property (getter=isAsynchronous) BOOL asynchronous; 
@property (assign) unsigned long long maximumDrawableCount; 
@property (assign) BOOL lowLatency; 
@property (assign) double inputTime; 
@property (assign) double drawableTimeoutSeconds; 
@property (assign) BOOL presentsWithTransaction; 
@property (copy) NSDictionary * drawableProperties; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(BOOL)isAsynchronous;
-(void)_display;
-(EAGLNativeWindowObject*)nativeWindow;
-(NSDictionary *)drawableProperties;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)setDrawableProperties:(NSDictionary *)arg1 ;
-(BOOL)presentsWithTransaction;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(BOOL)_defersDidBecomeVisiblePostCommit;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(BOOL)lowLatency;
-(void)setInputTime:(double)arg1 ;
-(void)setLowLatency:(BOOL)arg1 ;
-(unsigned long long)maximumDrawableCount;
-(BOOL)isDrawableAvailableInternal;
-(BOOL)isDrawableAvailable;
-(void)discardContents;
-(void)setAsynchronous:(BOOL)arg1 ;
-(void)setMaximumDrawableCount:(unsigned long long)arg1 ;
-(double)inputTime;
-(void)setDrawableTimeoutSeconds:(double)arg1 ;
-(double)drawableTimeoutSeconds;
@end
