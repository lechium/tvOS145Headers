/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNLocationHistoryProvider;
@class NSArray;

@interface MNLocationHistory : NSObject {

	id<MNLocationHistoryProvider> _locationHistoryProvider;

}

@property (nonatomic,retain) id<MNLocationHistoryProvider> locationHistoryProvider;              //@synthesize locationHistoryProvider=_locationHistoryProvider - In the implementation block
@property (readonly) NSArray * locationHistory; 
-(id)init;
-(NSArray *)locationHistory;
-(id<MNLocationHistoryProvider>)locationHistoryProvider;
-(void)setLocationHistoryProvider:(id<MNLocationHistoryProvider>)arg1 ;
@end
