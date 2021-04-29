/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet;

@interface IMDGroupPhotoRefreshController : NSObject {

	NSMutableSet* _refreshRequests;

}

@property (nonatomic,retain) NSMutableSet * refreshRequests;              //@synthesize refreshRequests=_refreshRequests - In the implementation block
@property (nonatomic,readonly) double minRefreshTime; 
@property (nonatomic,readonly) double maxRefreshTime; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSMutableSet *)refreshRequests;
-(double)minRefreshTime;
-(double)maxRefreshTime;
-(BOOL)shouldRefreshTTLForGroupPhoto:(id)arg1 chatGUID:(id)arg2 ;
-(void)refreshTTLForGroupPhoto:(id)arg1 chat:(id)arg2 ;
-(void)setRefreshRequests:(NSMutableSet *)arg1 ;
@end

