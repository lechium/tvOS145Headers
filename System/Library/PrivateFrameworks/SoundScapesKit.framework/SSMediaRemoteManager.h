/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoundScapesKit.framework/SoundScapesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SSMediaRemoteCommandHandlerDelegate;
@interface SSMediaRemoteManager : NSObject {

	BOOL _supportsPreviousTrack;
	id<SSMediaRemoteCommandHandlerDelegate> _commandHandlerDelegate;

}

@property (nonatomic,readonly) BOOL supportsPreviousTrack;                                                       //@synthesize supportsPreviousTrack=_supportsPreviousTrack - In the implementation block
@property (assign,nonatomic,__weak) id<SSMediaRemoteCommandHandlerDelegate> commandHandlerDelegate;              //@synthesize commandHandlerDelegate=_commandHandlerDelegate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setCommandHandlerDelegate:(id<SSMediaRemoteCommandHandlerDelegate>)arg1 ;
-(void)enablePreviousTrackSupport:(BOOL)arg1 ;
-(BOOL)supportsPreviousTrack;
-(void)_configureMediaRemoteCommands;
-(void)_overrideDisplayName;
-(long long)_handlePreviousTrackCommand;
-(id<SSMediaRemoteCommandHandlerDelegate>)commandHandlerDelegate;
-(id)getLocalizedAppName;
@end

