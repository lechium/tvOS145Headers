/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDAccessoryBrowserDelegate;
@class NSString, NSData;

@interface HMDPairedAccessoryInformation : NSObject {

	NSString* _identifier;
	NSData* _setupHash;
	unsigned long long _transports;
	id<HMDAccessoryBrowserDelegate> _delegate;

}

@property (readonly) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSData * setupHash;                                           //@synthesize setupHash=_setupHash - In the implementation block
@property (readonly) unsigned long long transports;                                //@synthesize transports=_transports - In the implementation block
@property (__weak,readonly) id<HMDAccessoryBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id<HMDAccessoryBrowserDelegate>)delegate;
-(NSString *)identifier;
-(unsigned long long)transports;
-(NSData *)setupHash;
-(id)initWithIdentifier:(id)arg1 transports:(unsigned long long)arg2 setupHash:(id)arg3 delegate:(id)arg4 ;
@end

