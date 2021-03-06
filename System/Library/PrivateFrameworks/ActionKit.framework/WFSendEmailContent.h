/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface WFSendEmailContent : NSObject <NSSecureCoding> {

	BOOL _isHTML;
	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSString* _subject;
	NSString* _body;
	NSArray* _attachments;

}

@property (nonatomic,copy) NSArray * toRecipients;               //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,copy) NSArray * ccRecipients;               //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,copy) NSArray * bccRecipients;              //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,copy) NSString * subject;                   //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * body;                      //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) BOOL isHTML;                        //@synthesize isHTML=_isHTML - In the implementation block
@property (nonatomic,copy) NSArray * attachments;                //@synthesize attachments=_attachments - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(BOOL)isHTML;
-(NSArray *)toRecipients;
-(void)setToRecipients:(NSArray *)arg1 ;
-(NSArray *)ccRecipients;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(NSArray *)bccRecipients;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(void)setIsHTML:(BOOL)arg1 ;
@end

