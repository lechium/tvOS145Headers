/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer, NSString, NSDictionary;

@interface CAContext : NSObject {

	Context* _impl;

}

@property (readonly) unsigned contextId; 
@property (retain) CALayer * layer; 
@property (assign) CGColorSpaceRef colorSpace; 
@property (assign) unsigned commitPriority; 
@property (assign) BOOL colorMatchUntaggedContent; 
@property (copy) NSString * contentsFormat; 
@property (copy) NSString * annotation; 
@property (readonly) NSDictionary * options; 
@property (assign) float level; 
@property (readonly) unsigned displayId; 
@property (getter=isSecure) BOOL secure; 
@property (assign) float desiredDynamicRange; 
@property (readonly) BOOL valid; 
+(id)localContext;
+(id)currentContext;
+(id)localContextWithOptions:(id)arg1 ;
+(id)remoteContextWithOptions:(id)arg1 ;
+(id)allContexts;
+(id)remoteContext;
+(void)setClientPort:(unsigned)arg1 ;
+(id)objectForSlot:(unsigned)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)invalidate;
-(BOOL)valid;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(NSDictionary *)options;
-(float)level;
-(void)setLevel:(float)arg1 ;
-(unsigned)contextId;
-(BOOL)addFence:(id)arg1 ;
-(unsigned)displayId;
-(NSString *)annotation;
-(CALayer *)layer;
-(void*)contextImpl;
-(NSString *)contentsFormat;
-(void)setContentsFormat:(NSString *)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(unsigned)commitPriority;
-(BOOL)colorMatchUntaggedContent;
-(float)desiredDynamicRange;
-(id)initWithOptions:(id)arg1 localContext:(BOOL)arg2 ;
-(id)initRemoteWithOptions:(id)arg1 ;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setCommitPriority:(unsigned)arg1 ;
-(void)setColorMatchUntaggedContent:(BOOL)arg1 ;
-(void)setLayer:(CALayer *)arg1 ;
-(void)orderAbove:(unsigned)arg1 ;
-(void)orderBelow:(unsigned)arg1 ;
-(void)setDesiredDynamicRange:(float)arg1 ;
-(BOOL)addFence:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned)createFencePort;
-(void)setFencePort:(unsigned)arg1 ;
-(void)setFencePort:(unsigned)arg1 commitHandler:(/*^block*/id)arg2 ;
-(void)setFence:(unsigned)arg1 count:(unsigned)arg2 ;
-(void)invalidateFences;
-(unsigned)createSlot;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(BOOL)arg2 ;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(BOOL)arg2 extendedColors:(BOOL)arg3 ;
-(void)deleteSlot:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forSlot:(unsigned)arg2 ;
-(void)transferSlot:(unsigned)arg1 toContextWithId:(unsigned)arg2 ;
-(unsigned)hitTestContext:(CGPoint)arg1 ;
-(void)setAnnotation:(NSString *)arg1 ;
-(Context*)renderContext;
-(Context*)retainRenderContext;
@end
