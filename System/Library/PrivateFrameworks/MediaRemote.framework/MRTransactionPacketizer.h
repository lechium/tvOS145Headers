/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject {

	NSMutableArray* _outgoingPackets;
	NSMutableDictionary* _incomingPackets;

}
-(BOOL)isEmpty;
-(void)packetize:(id)arg1 packageSize:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)unpacketize:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

