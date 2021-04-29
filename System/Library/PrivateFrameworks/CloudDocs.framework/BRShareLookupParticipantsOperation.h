/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/BROperation.h>

@class NSArray;

@interface BRShareLookupParticipantsOperation : BROperation {

	NSArray* _userIdentities;
	/*^block*/id _lookupParticipantsCompletionBlock;

}

@property (copy) id lookupParticipantsCompletionBlock;              //@synthesize lookupParticipantsCompletionBlock=_lookupParticipantsCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)lookupParticipantsCompletionBlock;
-(void)setLookupParticipantsCompletionBlock:(id)arg1 ;
-(id)initWithUserIdentities:(id)arg1 ;
@end

