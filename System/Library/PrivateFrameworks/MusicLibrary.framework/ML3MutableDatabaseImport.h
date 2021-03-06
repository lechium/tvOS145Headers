/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/ML3DatabaseImport.h>

@class NSString, NSData, NSFileHandle;

@interface ML3MutableDatabaseImport : ML3DatabaseImport

@property (nonatomic,copy) NSString * libraryPath; 
@property (nonatomic,copy) NSData * trackData; 
@property (nonatomic,copy) NSData * playlistData; 
@property (nonatomic,retain) NSFileHandle * fileHandle; 
@property (nonatomic,copy) NSString * syncAnchor; 
@property (assign,getter=isResetSync,nonatomic) BOOL resetSync; 
@property (assign,getter=isSagaEnabled,nonatomic) BOOL sagaEnabled; 
@property (assign,nonatomic) long long storeAccountID; 
@property (assign,nonatomic) long long preferredVideoQuality; 
@property (assign,nonatomic) unsigned homeSharingBasePlaylistID; 
@property (assign,nonatomic) BOOL tracksAreLibraryOwnedContent; 
@property (assign,nonatomic) BOOL playlistsAreLibraryOwnedContent; 
@property (assign,getter=isPendingMatch,nonatomic) BOOL pendingMatch; 
@property (assign,nonatomic) BOOL isServerImport; 
@property (nonatomic,copy) NSString * syncLibraryID; 
@property (assign,getter=isSuspendable,nonatomic) BOOL suspendable; 
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)setStoreAccountID:(long long)arg1 ;
-(void)setSyncAnchor:(NSString *)arg1 ;
-(void)setSyncLibraryID:(NSString *)arg1 ;
-(void)setPreferredVideoQuality:(long long)arg1 ;
-(void)setLibraryPath:(NSString *)arg1 ;
-(void)setTrackData:(NSData *)arg1 ;
-(void)setPlaylistData:(NSData *)arg1 ;
-(void)setResetSync:(BOOL)arg1 ;
-(void)setSagaEnabled:(BOOL)arg1 ;
-(void)setHomeSharingBasePlaylistID:(unsigned)arg1 ;
-(void)setTracksAreLibraryOwnedContent:(BOOL)arg1 ;
-(void)setPlaylistsAreLibraryOwnedContent:(BOOL)arg1 ;
-(void)setPendingMatch:(BOOL)arg1 ;
-(void)setIsServerImport:(BOOL)arg1 ;
-(void)setSuspendable:(BOOL)arg1 ;
@end

