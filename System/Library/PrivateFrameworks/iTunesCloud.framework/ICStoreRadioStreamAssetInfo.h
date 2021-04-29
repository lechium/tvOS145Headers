/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSDictionary, NSURL;

@interface ICStoreRadioStreamAssetInfo : NSObject {

	NSDictionary* _itemResponseDictionary;

}

@property (nonatomic,readonly) long long flavor; 
@property (nonatomic,readonly) long long streamProtocol; 
@property (nonatomic,copy,readonly) NSURL * streamURL; 
@property (nonatomic,copy,readonly) NSURL * keyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * keyServerURL; 
@property (getter=isiTunesStoreStream,nonatomic,readonly) BOOL iTunesStoreStream; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)flavor;
-(NSURL *)keyServerURL;
-(BOOL)isiTunesStoreStream;
-(id)initWithItemResponseDictionary:(id)arg1 ;
-(long long)streamProtocol;
-(NSURL *)streamURL;
-(NSURL *)keyCertificateURL;
-(long long)ICStoreRadioStreamFlavorWithString:(id)arg1 ;
-(long long)ICStoreRadioStreamProtocolWithString:(id)arg1 ;
@end
