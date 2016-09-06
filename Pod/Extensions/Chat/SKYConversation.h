//
//  Conversation.h
//  Pods
//
//  Created by Andrew Chung on 6/1/16.
//
//

#import <SKYKit/SKYKit.h>
#import "SKYChatRecord.h"

@class SKYChatUser;
@interface SKYConversation : SKYChatRecord

@property (strong, nonatomic)NSArray<NSString *>* participantIds;
@property (strong, nonatomic)NSArray<NSString *>* adminIds;
@property (strong, nonatomic)NSString* title;
@property (assign, nonatomic)BOOL isDirectMessage;
@property (strong, nonatomic)NSDate* updatedDate;
@property (strong, nonatomic)SKYChatUser* otherUser;

- (NSString *)toString;
- (NSString *)getOtherUserUserId:(NSString *)myUserId;

@end
