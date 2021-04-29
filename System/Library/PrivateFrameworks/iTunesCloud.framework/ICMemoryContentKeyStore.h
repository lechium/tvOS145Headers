/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICContentKeyStoreProtocol.h>

@class NSMutableDictionary;

@interface ICMemoryContentKeyStore : NSObject <ICContentKeyStoreProtocol> {

	NSMutableDictionary* _contentKeys;

}
-(id)init;
-(void)enumerateKeysUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)containsKeyForIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)loadKeyForIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)saveKey:(id)arg1 forIdentifier:(id)arg2 ;
@end

