/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EKEventStoreProvider.h>

@class EKEventStore, NSString;

@interface EKSharedEventStoreProvider : NSObject <EKEventStoreProvider> {

	EKEventStore* _sharedEventStore;

}

@property (nonatomic,readonly) EKEventStore * sharedEventStore;              //@synthesize sharedEventStore=_sharedEventStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventStore;
-(EKEventStore *)sharedEventStore;
-(id)initWithEventStore:(id)arg1 ;
@end

