/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaMiningKit/CLSSocialService.h>

@class CLSSocialServiceContacts;

@interface CLSSocialServiceCoreDuet : CLSSocialService {

	CLSSocialServiceContacts* _contactSocialService;

}

@property (retain) CLSSocialServiceContacts * contactSocialService;              //@synthesize contactSocialService=_contactSocialService - In the implementation block
-(id)init;
-(id)coreDuetPersonSuggestionsOnDate:(id)arg1 ;
-(CLSSocialServiceContacts *)contactSocialService;
-(void)setContactSocialService:(CLSSocialServiceContacts *)arg1 ;
@end

