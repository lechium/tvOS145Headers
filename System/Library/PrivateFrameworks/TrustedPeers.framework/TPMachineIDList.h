/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface TPMachineIDList : NSObject {

	NSArray* _entries;

}

@property (readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
-(id)description;
-(NSArray *)entries;
-(id)initWithEntries:(id)arg1 ;
-(id)entryFor:(id)arg1 ;
-(id)machineIDsInStatus:(unsigned long long)arg1 ;
@end
