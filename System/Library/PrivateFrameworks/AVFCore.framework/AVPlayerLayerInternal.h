/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVNetworkPlaybackPerfHUDLayer, NSObject, AVKeyPathDependencyManager, AVPlayer, NSString, NSDictionary, FigBaseCALayer, FigVideoContainerLayer, FigSubtitleCALayer, AVPlayerLayer, NSSet, CALayer;

@interface AVPlayerLayerInternal : NSObject {

	AVNetworkPlaybackPerfHUDLayer* hudLayer;
	NSObject*<OS_dispatch_queue> serialQueue;
	BOOL isPresentationLayer;
	OpaqueFigSimpleMutexRef isReadyForDisplayMutex;
	NSObject*<OS_dispatch_queue> configurationQueue;
	AVKeyPathDependencyManager* dependencyManager;
	id playerItemHasEnqueuedVideoFrameListener;
	id windowSceneDidEnterBackgroundListener;
	id windowSceneWillEnterForegroundListener;
	AVPlayer* player;
	NSString* videoGravity;
	NSDictionary* pixelBufferAttributes;
	BOOL lanczosDownscalingEnabled;
	long long lanczosDownscalingFactor;
	FigBaseCALayer* maskLayer;
	FigVideoContainerLayer* videoLayer;
	FigSubtitleCALayer* subtitleLayer;
	FigBaseCALayer* closedCaptionLayer;
	AVPlayerLayer* interstitialLayer;
	BOOL isLegibleDisplayEnabled;
	BOOL isForScrubbingOnly;
	AVPlayerLayer* associatedRemoteModeLayer;
	BOOL willManageSublayersAsSwappedLayers;
	long long activeMode;
	BOOL isPartOfForegroundScene;
	BOOL showInterstitialInstead;
	BOOL isReadyForDisplay;
	AVPlayer* playerBeingObserved;
	NSSet* KVOInvokers;
	CGSize latestAppliedPresentationSize;
	BOOL preventsChangesToSublayerHierarchy;
	NSDictionary* clientLayers;
	BOOL isPIPModeEnabled;
	CALayer* placeholderContentLayerDuringPIPMode;
	BOOL isConnectedToSecondScreen;
	NSEdgeInsets legibleContentInsets;
	BOOL honorContentScale;
	double screenScale;
	BOOL isVisible;

}
@end

