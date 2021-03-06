/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface SHLibrarySyncResult : NSObject {

	NSError* _error;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
@end

