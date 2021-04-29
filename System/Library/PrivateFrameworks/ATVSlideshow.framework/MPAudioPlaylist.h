/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPAudioSupport;
@class NSMutableArray, MCAudioPlaylist, MCPlug, NSObject, MCMontage, NSMutableDictionary, MPPlaylistInternal;

@interface MPAudioPlaylist : NSObject <NSCopying> {

	NSMutableArray* _songs;
	MCAudioPlaylist* _audioPlaylist;
	MCPlug* _plug;
	NSObject*<MPAudioSupport> _parentObject;
	MCMontage* _montage;
	NSMutableDictionary* _attributes;
	MPPlaylistInternal* _internal;

}

@property (assign) double fadeInDuration; 
@property (assign) double fadeOutDuration; 
@property (assign) double duckInDuration; 
@property (assign) double duckOutDuration; 
@property (assign) double duckLevel; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)audioPlaylist;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(void)cleanup;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setParentObject:(id)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(void)setMontage:(id)arg1 ;
-(id)montage;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(id)songs;
-(id)parentDocument;
-(double)duckInDuration;
-(void)setDuckInDuration:(double)arg1 ;
-(double)duckOutDuration;
-(void)setDuckOutDuration:(double)arg1 ;
-(double)duckLevel;
-(void)setDuckLevel:(double)arg1 ;
-(void)copySongs:(id)arg1 ;
-(void)copyStruct:(id)arg1 ;
-(void)insertSongs:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeSongsAtIndices:(id)arg1 ;
-(void)addSong:(id)arg1 ;
-(void)addSongs:(id)arg1 ;
-(void)removeAllSongs;
-(void)moveSongsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(id)parentObject;
-(long long)countOfSongs;
-(void)setPlug:(id)arg1 ;
-(id)objectInSongsAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inSongsAtIndex:(long long)arg2 ;
-(void)removeObjectFromSongsAtIndex:(long long)arg1 ;
-(void)replaceObjectInSongsAtIndex:(long long)arg1 withObject:(id)arg2 ;
@end

