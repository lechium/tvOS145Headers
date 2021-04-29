/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ProgressiveResultsHandlerProtocol.h>

@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol> {

	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}
-(void)receiveProgressiveContacts:(id)arg1 matchInfos:(id)arg2 ;
-(void)completedWithError:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

