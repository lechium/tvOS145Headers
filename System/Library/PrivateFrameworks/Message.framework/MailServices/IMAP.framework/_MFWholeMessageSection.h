/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFMessageDataSection.h>

@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection> {

	MFDataHolder* _dataHolder;

}

@property (nonatomic,retain) MFDataHolder * dataHolder;              //@synthesize dataHolder=_dataHolder - In the implementation block
-(void)dealloc;
-(BOOL)isComplete;
-(id)partName;
-(MFDataHolder *)dataHolder;
-(BOOL)isPartial;
-(void)setDataHolder:(MFDataHolder *)arg1 ;
@end

