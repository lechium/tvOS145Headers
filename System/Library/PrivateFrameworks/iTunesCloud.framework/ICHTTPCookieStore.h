/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface ICHTTPCookieStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedCookieStore;
-(id)init;
-(void)dealloc;
-(void)removeAllCookies;
-(void)removeCookiesWithProperties:(id)arg1 ;
-(id)getCookiesForURL:(id)arg1 ;
-(id)getCookiesForURL:(id)arg1 userIdentifier:(id)arg2 ;
-(id)getCookiesForUserIdentifier:(id)arg1 ;
-(id)getCookie:(id)arg1 userIdentifier:(id)arg2 ;
-(id)getGlobalAccountCookiesForURL:(id)arg1 ;
-(id)getCookiesHeadersForURL:(id)arg1 userIdentifier:(id)arg2 ;
-(void)saveCookies:(id)arg1 forURL:(id)arg2 ;
-(void)saveCookies:(id)arg1 forURL:(id)arg2 userIdentifier:(id)arg3 ;
-(void)saveGlobalAccountCookies:(id)arg1 forURL:(id)arg2 ;
-(id)_accountForUserIdentifier:(id)arg1 ;
-(id)_cookieDictionaryForURL:(id)arg1 userIdentifier:(id)arg2 ;
-(void)_saveCookies:(id)arg1 userIdentifier:(id)arg2 ;
@end

