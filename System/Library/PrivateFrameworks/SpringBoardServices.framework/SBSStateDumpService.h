/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSStateDumpService : SBSAbstractSystemService
-(void)requestStateDump:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)enableRemoteStateDumpWithTimeout:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableRemoteStateDumpWithCompletion:(/*^block*/id)arg1 ;
@end

