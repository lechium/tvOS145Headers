/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EKFetchRequestToken.h>

@class EKEventStore;

@interface EKEventFetchRequestToken : NSObject <EKFetchRequestToken> {

	unsigned _token;
	EKEventStore* _eventStore;

}

@property (nonatomic,__weak,readonly) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) unsigned token;                                //@synthesize token=_token - In the implementation block
-(void)cancel;
-(unsigned)token;
-(EKEventStore *)eventStore;
-(id)initWithEventStore:(id)arg1 token:(int)arg2 ;
@end

