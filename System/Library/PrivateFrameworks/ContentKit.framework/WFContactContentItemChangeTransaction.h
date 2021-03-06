/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFContentItemChangeTransaction.h>

@class CNMutableContact, NSArray;

@interface WFContactContentItemChangeTransaction : WFContentItemChangeTransaction {

	CNMutableContact* _mutableContact;
	NSArray* _groupChangeRequest;

}

@property (nonatomic,readonly) CNMutableContact * mutableContact;              //@synthesize mutableContact=_mutableContact - In the implementation block
@property (nonatomic,retain) NSArray * groupChangeRequest;                     //@synthesize groupChangeRequest=_groupChangeRequest - In the implementation block
-(id)initWithContentItem:(id)arg1 ;
-(CNMutableContact *)mutableContact;
-(void)saveWithCompletionHandler:(/*^block*/id)arg1 isNew:(BOOL)arg2 ;
-(NSArray *)groupChangeRequest;
-(void)setGroupChangeRequest:(NSArray *)arg1 ;
@end

