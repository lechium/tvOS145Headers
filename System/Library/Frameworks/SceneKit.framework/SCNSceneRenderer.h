/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SCNScene, SCNNode, SKScene, MTLRenderPassDescriptor, AVAudioEngine, AVAudioEnvironmentNode;


@protocol SCNSceneRenderer <NSObject>
@property (nonatomic,retain) SCNScene * scene; 
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic,__weak) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) BOOL jitteringEnabled; 
@property (assign,getter=isTemporalAntialiasingEnabled,nonatomic) BOOL temporalAntialiasingEnabled; 
@property (assign,nonatomic) BOOL showsStatistics; 
@property (assign,nonatomic) unsigned long long debugOptions; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) unsigned long long renderingAPI; 
@property (nonatomic,readonly) void* context; 
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) MTLRenderPassDescriptor * currentRenderPassDescriptor; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long colorPixelFormat; 
@property (nonatomic,readonly) unsigned long long depthPixelFormat; 
@property (nonatomic,readonly) unsigned long long stencilPixelFormat; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,readonly) AVAudioEnvironmentNode * audioEnvironmentNode; 
@property (nonatomic,retain) SCNNode * audioListener; 
@property (nonatomic,readonly) CGRect currentViewport; 
@property (assign,nonatomic) BOOL usesReverseZ; 
@required
-(id<SCNSceneRendererDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void*)context;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(SCNScene *)scene;
-(void)setScene:(id)arg1;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(unsigned long long)colorPixelFormat;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1;
-(SKScene *)overlaySKScene;
-(BOOL)showsStatistics;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2;
-(unsigned long long)debugOptions;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(void)setDebugOptions:(unsigned long long)arg1;
-(unsigned long long)renderingAPI;
-(void)setPointOfView:(id)arg1;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1;
-(SCNNode *)pointOfView;
-(BOOL)usesReverseZ;
-(CGRect)currentViewport;
-(void)setUsesReverseZ:(BOOL)arg1;
-(BOOL)isJitteringEnabled;
-(BOOL)isTemporalAntialiasingEnabled;
-(void)setOverlaySKScene:(id)arg1;
-(void)setJitteringEnabled:(BOOL)arg1;
-(BOOL)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1;
-(SCNVector3*)projectPoint:(SCNVector3)arg1;
-(SCNVector3*)unprojectPoint:(SCNVector3)arg1;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setTemporalAntialiasingEnabled:(BOOL)arg1;
-(void)setShowsStatistics:(BOOL)arg1;
-(unsigned long long)depthPixelFormat;
-(unsigned long long)stencilPixelFormat;
-(AVAudioEngine *)audioEngine;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNNode *)audioListener;
-(void)setAudioListener:(id)arg1;

@end

