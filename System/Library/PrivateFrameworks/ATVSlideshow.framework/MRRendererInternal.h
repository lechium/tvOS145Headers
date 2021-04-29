/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MRLiveSlideshowDelegate, MRAsynchronousOperationsDelegate;
#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MRContext, NSThread, NSRecursiveLock, NSConditionLock, MRRenderArguments, NSMutableArray, NSMutableDictionary, NSMutableSet, MRLayerEffect, NSString, MRImage, NSArray, NSDictionary;

@interface MRRendererInternal : NSObject {

	MRContext* mContext;
	double mMasterStartTime;
	double mMasterDuration;
	int mMasterMode;
	NSThread* mRenderThread;
	NSRecursiveLock* mRenderLock;
	NSConditionLock* mFrameLock;
	double mTimeOffset;
	double mUnalteredTimeOffset;
	double mMasterClock;
	BOOL mIsStalled;
	BOOL mRenderingRequested;
	BOOL mHasToRebuildAudio;
	BOOL mDontShowDRMUI;
	BOOL mSlaveFrameMode;
	CGPoint mContextOffset;
	MRRenderArguments* mRenderArguments;
	CGImageRef mSnapshotAsCGImage;
	NSConditionLock* mSnapshotAsCGImageLock;
	int mPreviousMode;
	double mModeChangeTime;
	NSMutableArray* mSelectedLayers;
	NSMutableDictionary* mLayerTrackings;
	NSMutableSet* mLayersCurrentlyTrackedIn;
	NSMutableDictionary* mGestureRecognizers;
	MRLayerEffect* mLayerCurrentlyTextEditing;
	NSString* mCurrentlyEditedTextElement;
	BOOL mShouldPauseWhenStill;
	BOOL mNeedsToResize;
	BOOL mNeedsToTemporaryResize;
	BOOL mNeedsToResumeOrPauseLayers;
	BOOL mNeedsToSynchronizeTimeInLayers;
	BOOL mNeedsToSynchronizeTimeInAudioMovies;
	CGSize mTemporarySize;
	double mMorphingStartTime;
	double mMorphingEndTime;
	double mMorphingRotationAngle;
	BOOL mMorphingHandlesRotation;
	MRImage* mSnapshotForMorphing;
	NSMutableArray* mActions;
	NSMutableDictionary* mAudioPlayerBuckets;
	NSArray* mAudioPlayerSortedBuckets;
	id<MRLiveSlideshowDelegate> mLiveSlideshowDelegate;
	id<MRAsynchronousOperationsDelegate> mAsynchronousOperationsDelegate;
	BOOL mScreenBurnTest;
	unsigned long long mScreenBurnTestCurrentPass;
	MRImage* mScreenBurnTestAccumulationImage1;
	MRImage* mScreenBurnTestAccumulationImage2;
	NSMutableArray* mNavigatorHistoryBack;
	NSMutableArray* mNavigatorHistoryForth;
	NSDictionary* mForcedState;
	BOOL mHideTextWhileEditing;
	BOOL mUsesNewImageManager;
	double mFrameTime[64];
	unsigned mFrameTimeIndex;
	_sFILE* mRenderingLogFile;
	double mPreviousStartTimeForLog;
	double mLastSaveTimeForLog;
	NSString* mCurrentIDs;
	MRImage* mCurrentIDsImage;
	NSString* mPreviousCurrentIDs;
	double mOuterTime;
	BOOL mInnerTimeNeedsSync;
	BOOL mUseOuterTime;
	BOOL mOuterIsPlaying;
	BOOL mInnerIsPlayingNeedsSync;
	BOOL mUseOuterIsPlaying;
	unsigned long long mCountOfPreloadingImages;
	BOOL mUsesExternalDisplayLink;

}
@end

