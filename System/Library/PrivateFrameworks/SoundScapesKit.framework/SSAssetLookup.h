/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoundScapesKit.framework/SoundScapesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSPlaybackStateChanged.h>

@class NSMutableArray, NSString;

@interface SSAssetLookup : NSObject <SSPlaybackStateChanged> {

	NSMutableArray* _userDislikedTracks;

}

@property (getter=getLastPlaybackAssetName,nonatomic,copy) NSString * lastPlaybackAssetName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(id)init;
-(void)dealloc;
-(id)getLastPlaybackAssetName;
-(void)setLastPlaybackAssetName:(NSString *)arg1 ;
-(id)getNextTrack:(id)arg1 ;
-(id)getPreviousTrack:(id)arg1 ;
-(id)getUpdatedPlaySequence;
-(void)updateDislikedTracks:(BOOL)arg1 trackName:(id)arg2 ;
-(void)playbackStateChanged:(unsigned long long)arg1 ;
-(void)clearUserDislikedTracks;
@end

