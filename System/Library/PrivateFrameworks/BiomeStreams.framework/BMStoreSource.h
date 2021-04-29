/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BMSource.h>

@class BMStreamDatastoreWriter;

@interface BMStoreSource : BMSource {

	BMStreamDatastoreWriter* _writer;

}
-(void)sendEvent:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 ;
-(void)sendEvent:(id)arg1 timestamp:(double)arg2 ;
@end
