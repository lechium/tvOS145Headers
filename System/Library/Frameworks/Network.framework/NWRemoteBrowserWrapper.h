/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NWBrowser;

@interface NWRemoteBrowserWrapper : NSObject {

	NSUUID* _clientID;
	NWBrowser* _browser;

}

@property (retain) NSUUID * clientID;                //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWBrowser * browser;              //@synthesize browser=_browser - In the implementation block
-(NSUUID *)clientID;
-(void)setClientID:(NSUUID *)arg1 ;
-(NWBrowser *)browser;
-(void)setBrowser:(NWBrowser *)arg1 ;
@end

