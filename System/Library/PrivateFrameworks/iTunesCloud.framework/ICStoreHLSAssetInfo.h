/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSURL;

@interface ICStoreHLSAssetInfo : NSObject <NSCopying> {

	NSDictionary* _itemResponseDictionary;
	BOOL _isiTunesStoreStream;
	NSURL* _keyCertificateURL;
	NSURL* _keyServerURL;
	NSURL* _playlistURL;
	NSURL* enhancedAudioKeyCertificateURL;
	NSURL* enhancedAudioKeyServerURL;

}

@property (nonatomic,copy) NSURL * playlistURL;                                              //@synthesize playlistURL=_playlistURL - In the implementation block
@property (nonatomic,copy) NSURL * keyCertificateURL;                                        //@synthesize keyCertificateURL=_keyCertificateURL - In the implementation block
@property (nonatomic,copy) NSURL * keyServerURL;                                             //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (assign,getter=isiTunesStoreStream,nonatomic) BOOL iTunesStoreStream;              //@synthesize isiTunesStoreStream=_isiTunesStoreStream - In the implementation block
@property (nonatomic,copy) NSURL * enhancedAudioKeyCertificateURL; 
@property (nonatomic,copy) NSURL * enhancedAudioKeyServerURL; 
@property (nonatomic,copy,readonly) NSURL * alternatePlaylistURL; 
@property (nonatomic,copy,readonly) NSURL * alternateKeyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * alternateKeyServerURL; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)keyServerURL;
-(void)setKeyServerURL:(NSURL *)arg1 ;
-(BOOL)isiTunesStoreStream;
-(id)initWithItemResponseDictionary:(id)arg1 ;
-(NSURL *)keyCertificateURL;
-(NSURL *)enhancedAudioKeyCertificateURL;
-(NSURL *)enhancedAudioKeyServerURL;
-(NSURL *)alternatePlaylistURL;
-(NSURL *)alternateKeyCertificateURL;
-(NSURL *)alternateKeyServerURL;
-(void)setITunesStoreStream:(BOOL)arg1 ;
-(void)setKeyCertificateURL:(NSURL *)arg1 ;
-(NSURL *)playlistURL;
-(void)setPlaylistURL:(NSURL *)arg1 ;
-(void)setEnhancedAudioKeyCertificateURL:(NSURL *)arg1 ;
-(void)setEnhancedAudioKeyServerURL:(NSURL *)arg1 ;
@end

