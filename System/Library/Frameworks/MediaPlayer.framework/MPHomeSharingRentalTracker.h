/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject {

	NSObject*<OS_dispatch_queue> _rentalTrackerQueue;
	NSMutableDictionary* _rentals;

}
+(id)sharedInstance;
-(id)_init;
-(void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2 ;
-(void)removeRentalWithItemID:(unsigned long long)arg1 ;
-(void)removeAllRentalsForDatabaseID:(id)arg1 ;
-(void)_saveRentals;
@end

