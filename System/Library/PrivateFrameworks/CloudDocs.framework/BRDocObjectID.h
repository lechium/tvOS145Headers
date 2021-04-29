/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/BRFileObjectID.h>

@interface BRDocObjectID : BRFileObjectID {

	unsigned _docID;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)documentID;
-(BOOL)isDocumentID;
-(unsigned long long)rawID;
-(id)initWithDocID:(unsigned)arg1 ;
-(id)initWithDocIDNumber:(id)arg1 ;
-(id)asString;
@end

