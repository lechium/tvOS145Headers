/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BMSourceStream.h>
#import <libobjc.A.dylib/BMStream.h>

@class BMStoreStream, NSString;

@interface BMIntentStream : NSObject <BMSourceStream, BMStream> {

	BMStoreStream* _storeStream;

}

@property (nonatomic,readonly) NSString * identifier; 
-(id)init;
-(NSString *)identifier;
-(id)source;
-(id)publisherFromStartTime:(double)arg1 ;
-(void)deleteIntentsWithIdentifiers:(id)arg1 bundleID:(id)arg2 ;
@end

