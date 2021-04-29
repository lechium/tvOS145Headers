/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class RBSProcessHandle, NSDictionary, NSString;

@interface RBSHandshakeResponse : NSObject <RBSXPCSecureCoding> {

	RBSProcessHandle* _handle;
	NSDictionary* _assertionIdentifiersByOldIdentifier;
	NSDictionary* _assertionErrorsByOldIdentifier;

}

@property (nonatomic,retain) RBSProcessHandle * handle;                                       //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSDictionary * assertionIdentifiersByOldIdentifier;              //@synthesize assertionIdentifiersByOldIdentifier=_assertionIdentifiersByOldIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * assertionErrorsByOldIdentifier;                   //@synthesize assertionErrorsByOldIdentifier=_assertionErrorsByOldIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(RBSProcessHandle *)handle;
-(void)setHandle:(RBSProcessHandle *)arg1 ;
-(void)setAssertionIdentifiersByOldIdentifier:(NSDictionary *)arg1 ;
-(void)setAssertionErrorsByOldIdentifier:(NSDictionary *)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(NSDictionary *)assertionIdentifiersByOldIdentifier;
-(NSDictionary *)assertionErrorsByOldIdentifier;
@end

