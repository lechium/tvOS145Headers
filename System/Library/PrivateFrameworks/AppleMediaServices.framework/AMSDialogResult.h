/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AMSDialogRequest, NSString, NSArray, NSMutableDictionary;

@interface AMSDialogResult : NSObject <NSSecureCoding> {

	AMSDialogRequest* _originalRequest;
	NSString* _selectedActionIdentifier;
	NSArray* _textfieldValues;
	NSMutableDictionary* _userInfo;

}

@property (nonatomic,readonly) AMSDialogRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,copy) NSString * selectedActionIdentifier;                 //@synthesize selectedActionIdentifier=_selectedActionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * textfieldValues;                           //@synthesize textfieldValues=_textfieldValues - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * userInfo;                      //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSMutableDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AMSDialogRequest *)originalRequest;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(id)initWithOriginalRequest:(id)arg1 selectedActionIdentifier:(id)arg2 ;
-(void)setTextfieldValues:(NSArray *)arg1 ;
-(NSString *)selectedActionIdentifier;
-(NSArray *)textfieldValues;
-(void)setSelectedActionIdentifier:(NSString *)arg1 ;
@end

